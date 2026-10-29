@interface FTSMsgSearchTalkerCell : MMTableViewCell
{
    UIImageView * _imageView; // +0x8
    MMUILabel * _intentLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    double _lastLayoutWidth; // +0x20
    NSString * _lastTalker; // +0x28
    NSString * _lastQuery; // +0x30
    BOOL _isRelayouting; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;
- (void)initView;
- (void)updateTalker:(id)arg1 andQuery:(id)arg2;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
