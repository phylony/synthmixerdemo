//
//  SCSynthMixerViewController.h
//  SynthMixDemo
//
//  Created by Stephen Cussen on 12/5/13.
//  Copyright (c) 2013 Stephen Cussen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreAudio/CoreAudioTypes.h>

@interface SCSynthMixerViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel  *currentPresetLabel;
@property (weak, nonatomic) IBOutlet UILabel *pitchAdjustmentValue;
@property (weak, nonatomic) IBOutlet UILabel *bus1PresetName;
@property (weak, nonatomic) IBOutlet UILabel *bus2PresetName;

- (IBAction) startPlayLowNote:(id)sender;
- (IBAction) stopPlayLowNote:(id)sender;
- (IBAction) startPlayMidNote:(id)sender;
- (IBAction) stopPlayMidNote:(id)sender;
- (IBAction) startPlayHighNote:(id)sender;
- (IBAction) stopPlayHighNote:(id)sender;
- (IBAction) pitchAdjustmentChanged:(id)sender;


- (IBAction)toggleBus1:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *bus1Button;

- (IBAction)toggleBus2:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *bus2Button;



@end
