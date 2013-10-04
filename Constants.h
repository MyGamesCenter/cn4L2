//  Created by Newport Coast Software / Harry A. Layman of 7/31/10
//  Copyright Newport Coast Software (C) 2010. All rights reserved.
//  101228 -- changes for 2.0 to enable "review mode"
//     
//  global constants
//  user Preferences to remmber between games
//  clone for version 3.00 fr4L2 110714
//  cloned to EN4L2 from FR4L2 110802
// note well : chinese set names have errors. fix if doing CN4CN or cloning.. 110923


/* 
 
 Completed updates for 3.01 and 3.03 110824
 
 a) UI Base shows Pat Pending
 b) settings bundle added; L1 Tile Language settlable outside of app.
 
 
 need to add warning when EN is uses in lieu of some other UI language that is not avail. 
 alert  and set to english (e.g. "Warming: NO UI FOund for language XX. Loading English UI."
 
 UI selection is in viewDidLoad -- if becomse dynamic, would need to redo a lot of stuff...
 
 3.04: swipes. 
 
 Known issues:
 
 erratta:  FR4ENv300 should have les lunettes de sole in set 13 tile 466.
 
 
 added DEMO movie, and tv button on UI. new popover to show the movie.
 
 only did these in english, with no i18N yet.  thinking about it.  should also i18N the swipoe enalbed stuff on the about screen, but only have english values there. 
 
 
 ///
 
 3.05 animated flips. 110903.
 
 version 3.05 will ship with:
 
 a) animated flip
 b) new images for 288 pictures (or many of them)
 c) swipes enabled and controlled by settings bundle: double-tap,left/right swipe
 d) settings bundle support for alt L1 tile language, swipes
 e) new about screen (with icons decoded
 f) buttons with icons, not words, on main UI
 g) demo movie replacing written instructions
 
 e) replace text instructions with video???  or additional video demo popup...
 
 110917 added japanese!!
     // begin pause state re-sync fix 110921 -- in main view controller. 
 
 120805  version 3.90 -- back to original graphics (mostly); add mute on / off button.
 final and validated 120807 4pm.
 
 
 */
 

#define	kGameMode	@"gameModePreference"	// WW or WP or PP 
//  matchMode in code right now...
#define	kLangToTest	@"langToTestPreference"	// EN or CN
//  pictureLang in code right now... 

#define	kUILangPref	@"UILangUIPreference"	// will be "UI" for phone country or or de/en/es/zh/it 
#define	kL1	@"CN"	// EN   in version 3.0 we use k-L1 as a string to hold the current UI / learner's language. so comment out and don't use.
#define	kL2	@"CN"	// language to learn.


//


#define	kLES	@"ES"	

#define	kLEN	@"EN"	

#define	kLCN	@"CN"	

#define	kLIT	@"IT"	

#define	kLDE	@"DE"	

#define	kLFR 	@"FR"	

#define	kLKR 	@"KR"	

#define	kLJP 	@"JP"	


//


#define	kLastUserName	@"lastUserName"	          // 101219
//  default to AAA, prompt if they set... 

#define	kSetToUse  @"lastSetUsed" // to index into WSETZ table
//  setID(gSetIDX) = gSetID  in code right now... 
#define	kUseAlpha  @"useAlpha" // if zero then use FLIPPED Logic   v 2.14
//  setToAlpha  non-sero will fade to value of .7
#define	kPreventEM  @"preventEM" // if non-zero then prevent exact match  // v2.14
//  preventEM defaults to 0, allows exact match 


// #define kHighScoresFileName @"/WordLianxiHS.txt" 
#define kHighScoresFileName @"/WLianxiHSFN.txt" //   3.18 change to UTF8 encoded file add FN to file name
// high score file name - only here


// new db name defines:  110714
// #define kDatabaseNameL24CN @"wlllsCN4CNV300B.sl3"   //   DOES NOT EXIST.. USE EN for CN Users.
#define kDatabaseNameL24DE @"wlllsDE4CNV392K.sl3"   //  fixed version 392 only update. 
#define kDatabaseNameL24EN @"wlllsCN4ENV300C.sl3" // 
#define kDatabaseNameL24ES @"wlllsCN4ESV392J.sl3"   //  120929
#define kDatabaseNameL24FR @"wlllsCN4FRV392J.sl3"   //  120929
#define kDatabaseNameL24IT @"wlllsCN4ITV300B.sl3"   // 
#define kDatabaseNameL24KR @"wlllsKR4CNV300A.sl3"   //  
#define kDatabaseNameL24JP @"wlllsJP4CNV300A.sl3"   //  
// database file name only here
#define kSoftwareVersion @"version 3.92" // 
// shown on about page
#define kDatabaseVersion @"databaseVersionKey" // 
// shown on about page

