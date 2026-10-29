@interface WCFinderPostMediaThumbModel : NSObject
{
    int _ratio; // +0x8
    NSString * _mediaPath; // +0x10
    NSString * _thumbPath; // +0x18
    double _originScore; // +0x20
    double _thumbScore; // +0x28
    NSString * _fullScreenThumbPath; // +0x30
    WCFinderFullScreenEditRectModel * _editRectModel; // +0x38
    NSString * _halfMediaPath; // +0x40
}
- (id)mediaPath;
- (void)setMediaPath:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (double)originScore;
- (void)setOriginScore:(double)arg1;
- (double)thumbScore;
- (void)setThumbScore:(double)arg1;
- (id)fullScreenThumbPath;
- (void)setFullScreenThumbPath:(id)arg1;
- (id)editRectModel;
- (void)setEditRectModel:(id)arg1;
- (id)halfMediaPath;
- (void)setHalfMediaPath:(id)arg1;
- (int)ratio;
- (void)setRatio:(int)arg1;
- (void).cxx_destruct;
@end

