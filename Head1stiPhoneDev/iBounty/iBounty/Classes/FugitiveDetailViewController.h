//
//  FugitiveDetailViewController.h
//  iBountyHunter
//
//  Created by Dan Pilone on 10/24/09.
//  Copyright 2009 Dan Pilone All rights reserved.
//

#import <UIKit/UIKit.h>

@class Fugitive;

@interface FugitiveDetailViewController : UIViewController {
	Fugitive *fugitive;
	UILabel *fugitiveNameLabel;
	UILabel *fugitiveIdLabel;
	UITextView *fugitiveDescriptionView;
	UILabel *fugitiveBountyLabel;
}

@property (nonatomic, retain) Fugitive *fugitive;
@property (nonatomic, retain) IBOutlet UILabel *fugitiveNameLabel;
@property (nonatomic, retain) IBOutlet UILabel *fugitiveIdLabel;
@property (nonatomic, retain) IBOutlet UITextView *fugitiveDescriptionView;
@property (nonatomic, retain) IBOutlet UILabel *fugitiveBountyLabel;

@end
