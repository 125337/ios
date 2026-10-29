@interface FTSCreateChatRoomCell : MMTableViewCell
{
    UIImageView * _imageView; // +0x8
    MMUILabel * _intentLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    double _lastLayoutWidth; // +0x20
    NSArray * _lastKeywords; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateCellWithKeywords:(id)arg1;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
