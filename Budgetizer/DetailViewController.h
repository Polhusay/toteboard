//
//  DetailViewController.h
//  Budgetizer
//
//  Created by Pol on 26/12/12.
//  Copyright (c) 2012 PER. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
