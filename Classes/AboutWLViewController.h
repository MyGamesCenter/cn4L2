//
//  AboutWLViewController.h
//  Wordz1.2
//
//  Created by Harry Layman on 9/11/10.
//  Copyright 2010 Newport Coast Software. All rights reserved.
//

#import <UIKit/UIKit.h>
//  #import <MediaPlayer/MediaPlayer.h>
@protocol AboutWLViewControllerDelegate;

@interface AboutWLViewController : UIViewController {  
   
	id <AboutWLViewControllerDelegate> delegate;
	
//        MPMoviePlayerController *player;  // add movie
    
		IBOutlet UIButton *doneButton;
		IBOutlet UILabel *dbVer; 
		IBOutlet UILabel *swVer; 
        IBOutlet UILabel *llVal; 
        IBOutlet UILabel *enswipes;

    int  kEnableSwipes;                         //110828 gestures 	
    BOOL bEnableSwipes;                         //110828 gestures defaults in settings bundle


}

-(IBAction) done;


@property (nonatomic, assign) id <AboutWLViewControllerDelegate> delegate;

@property (nonatomic, assign) IBOutlet UIButton *doneButton;
@property (nonatomic, retain) IBOutlet UILabel *dbVer;
@property (nonatomic, retain) IBOutlet UILabel *swVer;
@property (nonatomic, retain) IBOutlet UILabel *llVal;
@property (nonatomic, retain) IBOutlet UILabel *enswipes;

@end
@protocol AboutWLViewControllerDelegate
- (void) aboutWLViewControllerDidFinish:(AboutWLViewController *) controller;
@end