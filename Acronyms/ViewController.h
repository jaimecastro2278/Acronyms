//
//  ViewController.h
//  Acronyms
//
//  Created by Alan Rodriguez on 02/05/17.
//  Copyright © 2017 Alan Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *acronymInput;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
- (IBAction)searchAction:(UIButton *)sender;

@end

