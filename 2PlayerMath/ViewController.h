//
//  ViewController.h
//  2PlayerMath
//
//  Created by Steele on 2015-10-26.
//  Copyright © 2015 Steele. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GameController.h"

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *questionLabel;
@property (weak, nonatomic) IBOutlet UITextField *answerTextField;
@property (weak, nonatomic) IBOutlet UILabel *player1ScoreLabel;
@property (weak, nonatomic) IBOutlet UILabel *player2ScoreLabel;
@property (weak, nonatomic) IBOutlet UILabel *gameStatusLabel;

- (IBAction)num1Button:(id)sender;
- (IBAction)num2Button:(id)sender;
- (IBAction)num3Button:(id)sender;
- (IBAction)num4Button:(id)sender;
- (IBAction)num5Button:(id)sender;
- (IBAction)num6Button:(id)sender;
- (IBAction)num7Button:(id)sender;
- (IBAction)num8Button:(id)sender;
- (IBAction)num9Button:(id)sender;
- (IBAction)num0Button:(id)sender;
- (IBAction)numNegButton:(id)sender;
- (IBAction)newGameButton:(id)sender;

- (IBAction)deleteButton:(id)sender;

@end

