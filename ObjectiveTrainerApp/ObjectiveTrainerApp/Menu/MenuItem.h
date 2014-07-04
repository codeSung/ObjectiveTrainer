//
//  MenuItem.h
//  ObjectiveTrainerApp
//
//  Created by Kang Sungwon on 7/4/14.
//  Copyright (c) 2014 Kang Sungwon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MenuItem : NSObject

@property (strong, nonatomic) NSString *menuTitle;
@property (strong, nonatomic) NSString *menuIcon;
@property (nonatomic) int screenType;

@end
