//
//  Employee.h
//  BMITime
//
//  Created by Todd Pickell on 5/19/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
@class Asset;

@interface Employee : Person
{
    NSMutableSet *assets;
}

@property int employeeID;

-(void)addAssetsObject:(Asset *)a;
-(unsigned int)valueOfAssets;

@end
