@interface WCTableViewCellManager : NSObject
{
    BOOL _isNeedFixWidthAndAdjustFont; // +0x8
    BOOL _bNeedRemoveSystemSeperateLine; // +0x9
    BOOL _bNeedSeperateLine; // +0xa
    BOOL _bSeperateLineBackToSide; // +0xb
    WCTableViewCellBaseConfig * _cellConfig; // +0x10
    id _userInfo; // +0x18
    UIColor * _tintColor; // +0x20
    UIColor * _backgroundColor; // +0x28
    UIColor * _cellBackgroundColor; // +0x30
    UIColor * _borderColor; // +0x38
    double _cornerRadius; // +0x40
    UITableViewCell * _cell; // +0x48
    double _fCellHeight; // +0x50
    UIBezierPath * _cornerPath; // +0x58
    double _fSeperateLineLeftInset; // +0x60
    unsigned long long _seperateLineMode; // +0x68
    double _fSeperateLineRightInset; // +0x70
    UIColor * _fSeperateLineColor; // +0x78
    NSArray * _customRowAction; // +0x80
    NSObject * _eventHandler; // +0x88
    Class _cellCustomizedCellType; // +0x90
}
+ (id)centerCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)centerCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4;
+ (id)normalCellForTitle:(id)arg1;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 titleColor:(id)arg4 leftImage:(id)arg5 withRightRedDot:(BOOL)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 pathKey:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4 pathKey:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 withRightRedDot:(BOOL)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 pathKey:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 pathKey:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4 rightValue:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 canRightValueCopy:(BOOL)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 rightImage:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 leftBadge:(id)arg4 rightView:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightView:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 customView:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 rightView:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 rightValue:(id)arg6 rightImage:(id)arg7 withRightRedDot:(BOOL)arg8 selected:(BOOL)arg9;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 rightValue:(id)arg6 rightImage:(id)arg7 withRightRedDot:(BOOL)arg8 selected:(BOOL)arg9 pathKey:(id)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 titleColor:(id)arg5 badge:(id)arg6 rightValue:(id)arg7 rightImage:(id)arg8 withRightRedDot:(BOOL)arg9 selected:(BOOL)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 titleColor:(id)arg5 badge:(id)arg6 rightValue:(id)arg7 rightImage:(id)arg8 withRightRedDot:(BOOL)arg9 selected:(BOOL)arg10 pathKey:(id)arg11;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 titleColor:(id)arg5 badge:(id)arg6 rightValue:(id)arg7 rightColor:(id)arg8 withRightRedDot:(BOOL)arg9 selected:(BOOL)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 rightValue:(id)arg6 rightImageUrl:(id)arg7 withRightRedDot:(BOOL)arg8 selected:(BOOL)arg9 pathKey:(id)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 pathKey:(id)arg6;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(BOOL)arg4;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 on:(BOOL)arg5;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 desc:(id)arg5 on:(BOOL)arg6;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 leftMargin:(double)arg4 title:(id)arg5 desc:(id)arg6 on:(BOOL)arg7;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 leftMargin:(double)arg4 title:(id)arg5 desc:(id)arg6 on:(BOOL)arg7 disable:(BOOL)arg8;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 customView:(id)arg3 on:(BOOL)arg4;
+ (id)loadingCell;
+ (id)cellForMakeSel:(SEL)arg1 makeTarget:(id)arg2 actionSel:(SEL)arg3 actionTarget:(id)arg4 height:(double)arg5 userInfo:(id)arg6;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (void)drawCell:(id)arg1;
- (void)clearCell:(id)arg1;
- (void)configureCell:(id)arg1;
- (void)setFCellHeight:(double)arg1;
- (void)setNotStretchCellHeight:(double)arg1;
- (double)cellHeightFor:(id)arg1;
- (double)cellSeparatorLeftInset;
- (double)cellSeperateLineRightInset;
- (void)didBeClickedAt:(id)arg1;
- (void)willDisplayAt:(id)arg1;
- (long long)systemSelectionStyle:(unsigned long long)arg1;
- (id)cellConfig;
- (void)setCellConfig:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)isNeedFixWidthAndAdjustFont;
- (void)setIsNeedFixWidthAndAdjustFont:(BOOL)arg1;
- (BOOL)bNeedRemoveSystemSeperateLine;
- (void)setBNeedRemoveSystemSeperateLine:(BOOL)arg1;
- (BOOL)bNeedSeperateLine;
- (void)setBNeedSeperateLine:(BOOL)arg1;
- (BOOL)bSeperateLineBackToSide;
- (void)setBSeperateLineBackToSide:(BOOL)arg1;
- (id)tintColor;
- (void)setTintColor:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)cellBackgroundColor;
- (void)setCellBackgroundColor:(id)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)cell;
- (void)setCell:(id)arg1;
- (double)fCellHeight;
- (id)cornerPath;
- (void)setCornerPath:(id)arg1;
- (double)fSeperateLineLeftInset;
- (void)setFSeperateLineLeftInset:(double)arg1;
- (unsigned long long)seperateLineMode;
- (void)setSeperateLineMode:(unsigned long long)arg1;
- (double)fSeperateLineRightInset;
- (void)setFSeperateLineRightInset:(double)arg1;
- (id)fSeperateLineColor;
- (void)setFSeperateLineColor:(id)arg1;
- (id)customRowAction;
- (void)setCustomRowAction:(id)arg1;
- (id)eventHandler;
- (void)setEventHandler:(id)arg1;
- (Class)cellCustomizedCellType;
- (void)setCellCustomizedCellType:(Class)arg1;
- (void).cxx_destruct;
@end
