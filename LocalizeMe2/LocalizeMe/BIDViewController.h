//
//  BIDViewController.h
//  LocalizeMe
//
//  Created by Crescens Techstars on 12/11/13.
//  Copyright (c) 2013 Crescens Techstars. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *localeLabel;
@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *labels;

@end
