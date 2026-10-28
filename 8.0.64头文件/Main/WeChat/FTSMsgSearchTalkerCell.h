@interface FTSMsgSearchTalkerCell : MMTableViewCell
{
    UIImageView * _imageView; // +0x8
    MMUILabel * _intentLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;
- (void)initView;
- (void)updateTalker:(id)arg1 andQuery:(id)arg2;
- (void).cxx_destruct;
@end
