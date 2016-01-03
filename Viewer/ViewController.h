/*
  This file is part of the Structure SDK.
  Copyright © 2015 Occipital, Inc. All rights reserved.
  http://structure.io
*/

#import <UIKit/UIKit.h>
#define HAS_LIBCXX
#import <Structure/Structure.h>

@interface ViewController : UIViewController <STSensorControllerDelegate>

- (IBAction)buttonTapped:(UIButton *)sender;
- (IBAction)buttonTappediPhone:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UILabel *MaxDepth;
@property (weak, nonatomic) IBOutlet UILabel *MaxDepthiPad;
@property (weak, nonatomic) IBOutlet UILabel *surfaceAreaiPad;
@property (weak, nonatomic) IBOutlet UILabel *surfaceAreaiPhone;
@property (weak, nonatomic) IBOutlet UILabel *frameSAiPad;
@property (weak, nonatomic) IBOutlet UILabel *frameSAiPhone;
@property (weak, nonatomic) IBOutlet UILabel *thetaXiPad;
@property (weak, nonatomic) IBOutlet UILabel *thetaYiPad;
@property (weak, nonatomic) IBOutlet UILabel *SAexpiPad;

@end
