//
//  FugitiveListViewController.h
//  iBountyHunter
//
//  Created by Dan Pilone on 10/24/09.
//  Copyright 2009 Dan Pilone All rights reserved.
//

#import <UIKit/UIKit.h>


@interface FugitiveListViewController : UITableViewController {
	NSMutableArray *items;
}

@property (nonatomic, retain) NSMutableArray *items;

@end
