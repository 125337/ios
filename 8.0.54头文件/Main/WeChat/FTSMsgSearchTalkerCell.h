@interface FTSMsgSearchTalkerCell : MMTableViewCell
{
    UIImageView * _magnifier; // +0x8
    MMUILabel * _titleLabel; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;
- (void)initView;
- (id)compressString:(id)arg1 contraintWidth:(double)arg2;
- (void)updateTalker:(id)arg1 andQuery:(id)arg2 withInSession:(BOOL)arg3;
- (void).cxx_destruct;
@end

