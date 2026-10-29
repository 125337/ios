@interface WCCommentLikeView : MMUIButton
{
    unsigned long long _type; // +0x8
    UILabel * _likeNumbLabel; // +0x10
    UIImageView * _likeImageView; // +0x18
}
- (id)likeImageView;
- (id)likeNumbLabel;
- (id)init;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)updateSelectedStatus:(BOOL)arg1 isCommentClose:(BOOL)arg2 count:(unsigned long long)arg3;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void)setLikeNumbLabel:(id)arg1;
- (void)setLikeImageView:(id)arg1;
- (void).cxx_destruct;
@end

