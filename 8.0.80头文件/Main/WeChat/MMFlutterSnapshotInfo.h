@interface MMFlutterSnapshotInfo : NSObject
{
    UIImage * _image; // +0x8
    CGRect _frame; // +0x10
    CGRect _contentFrame; // +0x30
}
- (id)initWithImage:(id)arg1 frame:(CGRect)arg2 contentFrame:(CGRect)arg3;
- (id)image;
- (void)setImage:(id)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (CGRect)contentFrame;
- (void)setContentFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
