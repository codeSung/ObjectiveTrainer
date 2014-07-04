//
//  MenuViewController.h
//  ObjectiveTrainerApp
//
//  Created by Kang Sungwon on 7/4/14.
//  Copyright (c) 2014 Kang Sungwon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuModel.h"
#import "MenuItem.h"

@interface MenuViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) MenuModel *model;
@property (strong, nonatomic) NSArray *menuItems;

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@end
