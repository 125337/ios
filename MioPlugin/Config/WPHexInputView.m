#import "WPHexInputView.h"
#import "WPColorUtil.h"

@interface WPHexInputView () <UITextFieldDelegate>
@property (nonatomic, strong) UILabel    *label;
@property (nonatomic, strong) UITextField *textField;
@end

@implementation WPHexInputView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) [self commonInit];
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder {
    self = [super initWithCoder:coder];
    if (self) [self commonInit];
    return self;
}

- (void)commonInit {
    // Label
    self.label = [[UILabel alloc] init];
    self.label.text = @"HEX";
    self.label.font = [UIFont systemFontOfSize:14 weight:UIFontWeightMedium];

    // TextField
    self.textField = [[UITextField alloc] init];
    UIFont *hexFont = [UIFont fontWithName:@"Menlo-Regular" size:16]
                      ?: [UIFont monospacedSystemFontOfSize:16 weight:UIFontWeightRegular];
    self.textField.font = hexFont;
    self.textField.textAlignment = NSTextAlignmentCenter;
    self.textField.autocapitalizationType = UITextAutocapitalizationTypeAllCharacters;
    self.textField.layer.cornerRadius = 6;
    self.textField.layer.borderWidth = 1;
    self.textField.layer.borderColor = [UIColor separatorColor].CGColor;
    self.textField.delegate = self;

    [self addSubview:self.label];
    [self addSubview:self.textField];
}

- (void)layoutSubviews {
    [super layoutSubviews];
    CGFloat h = self.bounds.size.height;
    self.label.frame   = CGRectMake(0, 0, 36, h);
    self.textField.frame = CGRectMake(self.bounds.size.width - 140, 0, 140, h);
}

- (CGSize)intrinsicContentSize {
    return CGSizeMake(UIViewNoIntrinsicMetric, 36);
}

#pragma mark - UITextFieldDelegate

- (void)textFieldDidEndEditing:(UITextField *)textField {
    [self applyHex:textField.text];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [textField resignFirstResponder];
    return YES;
}

#pragma mark - 公共方法

- (void)setHexString:(NSString *)hexString {
    _hexString = hexString;
    self.textField.text = [hexString uppercaseString];
}

- (void)applyHex:(NSString *)hex {
    if ([WPColorUtil isValidHexString:hex]) {
        _hexString = hex;
        if (self.hexDidChange) {
            self.hexDidChange(hex);
        }
    } else {
        // 恢复
        self.textField.text = [_hexString uppercaseString];
    }
}

@end