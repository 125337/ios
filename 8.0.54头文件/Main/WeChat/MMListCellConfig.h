@interface MMListCellConfig : NSObject
{
    BOOL _accessoryModeOn; // +0x8
    BOOL _hidden; // +0x9
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    long long _accessoryType; // +0x20
    long long _cellType; // +0x28
    UIImage * _image; // +0x30
    id _accessoryTarget; // +0x38
    SEL _accessoryAction; // +0x40
    double _textMaxWidth; // +0x48
    double _imageToTextPadding; // +0x50
    NSString * _pathKey; // +0x58
    UIEdgeInsets _cellEdgeInsets; // +0x60
}
+ (id)cellWithType:(long long)arg1 title:(id)arg2 image:(id)arg3 subtitle:(id)arg4 accessoryType:(long long)arg5 accessoryTarget:(id)arg6 accessoryAction:(SEL)arg7;
+ (id)cellWithType:(long long)arg1 title:(id)arg2 image:(id)arg3 subtitle:(id)arg4 accessoryType:(long long)arg5 accessoryTarget:(id)arg6 accessoryAction:(SEL)arg7 pathKey:(id)arg8;
+ (id)cellWithText:(id)arg1;
+ (id)cellWithImage:(id)arg1;
+ (id)cellWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)cellWithText:(id)arg1 accessoryType:(long long)arg2;
+ (id)cellWithText:(id)arg1 accessoryType:(long long)arg2 accessoryTarget:(id)arg3 accessoryAction:(SEL)arg4;
+ (id)cellWithTitle:(id)arg1 subtitle:(id)arg2 accessoryType:(long long)arg3 accessoryTarget:(id)arg4 accessoryAction:(SEL)arg5;
+ (id)cellWithTitle:(id)arg1 subtitle:(id)arg2 accessoryType:(long long)arg3 accessoryTarget:(id)arg4 accessoryAction:(SEL)arg5 pathKey:(id)arg6;
+ (id)cellWithTitle:(id)arg1 rightSubtitle:(id)arg2 accessoryType:(long long)arg3 accessoryTarget:(id)arg4 accessoryAction:(SEL)arg5;
+ (id)cellWithDescription:(id)arg1;
+ (id)cellWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (long long)accessoryType;
- (void)setAccessoryType:(long long)arg1;
- (long long)cellType;
- (void)setCellType:(long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)accessoryTarget;
- (void)setAccessoryTarget:(id)arg1;
- (SEL)accessoryAction;
- (void)setAccessoryAction:(SEL)arg1;
- (BOOL)accessoryModeOn;
- (void)setAccessoryModeOn:(BOOL)arg1;
- (double)textMaxWidth;
- (void)setTextMaxWidth:(double)arg1;
- (BOOL)hidden;
- (void)setHidden:(BOOL)arg1;
- (UIEdgeInsets)cellEdgeInsets;
- (void)setCellEdgeInsets:(UIEdgeInsets)arg1;
- (double)imageToTextPadding;
- (void)setImageToTextPadding:(double)arg1;
- (id)pathKey;
- (void)setPathKey:(id)arg1;
- (void).cxx_destruct;
@end

