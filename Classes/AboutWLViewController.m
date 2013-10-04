    //
//  AboutWLViewController.m
//  Wordz1.2
//
//  Created by Harry Layman on 9/11/10.
//  Copyright 2010 Newport Coast Software. All rights reserved.
//

#import "AboutWLViewController.h"
#import "Wordz1_2ViewController.h"
#import "Constants.h"


@implementation AboutWLViewController


@synthesize  delegate; //, 
@synthesize  doneButton;
@synthesize  dbVer;
@synthesize  swVer;
@synthesize  llVal;
@synthesize  enswipes;


/*
 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
	
    
    [super viewDidLoad];
		
	//	self.view.backgroundColor = [UIColor cyanColor];
		//	self.view.backgroundColor = [UIColor redColor];
	//	  self.view.backgroundColor = [UIColor clearColor];
	
//  	wordzSetLabelNM.text = wordzSetNameL1;
		// get dbversion info
		// show software version info from constant file
//		[swVer.text initWithString:kSoftwareVersion];
	
	if ([[NSUserDefaults standardUserDefaults]  objectForKey:kDatabaseVersion]) {
		dbVer.text = [[NSUserDefaults standardUserDefaults]
							   stringForKey:kDatabaseVersion];
    }
    if ([[NSUserDefaults standardUserDefaults]  objectForKey:@"LL"]) {
            llVal.text = [[NSUserDefaults standardUserDefaults]
                          stringForKey:@"LL"];
        
	}
    //		NSLog(@"\n\nGot DB version of: %@.\n", dbVer.text);
    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];	
    bEnableSwipes  = [defaults boolForKey:@"enableSwipes"];    
    
    if (bEnableSwipes == TRUE) {
        //        NSLog(@" Swipes enabled...");
        kEnableSwipes = 1;
        enswipes.text = @"Swipes enabled.";
    }
    else {
        
        kEnableSwipes = 0;
        //        NSLog(@"No swipes....");
        enswipes.text = @"Swipes not enabled.";        
    }

    
    
	
//				  tileLangID[hh]         = [[NSMutableString alloc] initWithString: tileLangID_db[startDBptr]];
		swVer.text = kSoftwareVersion;
	
/* add movie
    // example:   correctSound = [[SoundEffect alloc] initWithContentsOfFile:[mainBundle pathForResource:@"BLOOP" ofType:@"WAV"]];
	
    NSString *url = [[NSBundle mainBundle]
                     pathForResource:@"wlv303-demo-06" ofType:@"m4v"];
    
    player = [[MPMoviePlayerController alloc] initWithContentURL:[NSURL fileURLWithPath:url]];
    
    [[NSNotificationCenter defaultCenter]
     addObserver:self selector:@selector(movieFinishedCallback:)
     
     name:MPMoviePlayerPlaybackDidFinishNotification object:player];
    
    //--set the size of the movie view and then add it to the View window--
    player.view.frame = CGRectMake(10, 10, 300, 300); [self.view addSubview:player.view];
    //--play movie--
    [player play];
    
    
 add movie end
 */

	
}


// also add for movie
/*
- (void) movieFinishedCallback:(NSNotification*) aNotification { 
    MPMoviePlayerController *moviePlayer = [aNotification object]; 
    [[NSNotificationCenter defaultCenter]
     
     removeObserver:self 
        name:MPMoviePlayerPlaybackDidFinishNotification
       object:moviePlayer]; 
    
    [moviePlayer.view removeFromSuperview];
    [player release];
}
*/
// end also add for movie

- (IBAction) done {
//		NSLog(@"Here in Done routine for AboutWLViewController.m");
	// got here 
	
	/*
	if (([theMMTextField.text isEqualToString: @"PP"]) ||
		([theMMTextField.text isEqualToString: @"WP"]))  {
		mmSetting = theMMTextField.text;
		[[NSUserDefaults standardUserDefaults] setObject:mmSetting forKey:kGameMode];
	}
	
	if (([thePLTextField.text isEqualToString: @"CN"]) ||
		([thePLTextField.text isEqualToString: @"EN"])) {
		plSetting = thePLTextField.text;
		[[NSUserDefaults standardUserDefaults] setObject:plSetting forKey:kLangToTest];
	}
	*/ 
	//  [[NSUserDefaults standardUserDefaults] setInteger:lives forKey:kLivesKey];
	
	
	//	NSLog(@"Here in Done routine for HighScoresViewController.m");
	// got here 
	// another way? :
	// [self.delegate highScoresViewControllerDidFinish:self];	// new 100821
	
	//	[[self parentViewController] dismissModalViewControllerAnimated:(BOOL)YES]; // not right100821
	//  [self.delegate settingsViewControllerDidFinish:self];	
	[self.delegate aboutWLViewControllerDidFinish:self];	
	
}		


#pragma mark ORientation and Memory management
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
	return ((interfaceOrientation == UIInterfaceOrientationLandscapeLeft) || 
			(interfaceOrientation == UIInterfaceOrientationLandscapeRight));
	//    return YES;
}


- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}


- (void)viewDidUnload {
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}


- (void)dealloc {
	[doneButton release];
	[dbVer release];
	[swVer release];
    [enswipes release];    
    [super dealloc];
}


@end
