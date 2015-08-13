//
//  CameraTableViewController.h
//  Ribbit
//
//  Created by Joshua Motley on 8/12/15.
//  Copyright (c) 2015 TeamTreeHouse. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CameraTableViewController : UITableViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
@property (nonatomic, strong) UIImagePickerController *imagePicker;

@end
