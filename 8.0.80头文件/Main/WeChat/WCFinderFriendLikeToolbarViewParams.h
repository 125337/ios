@interface WCFinderFriendLikeToolbarViewParams : NSObject
{
    double _headViewLen; // +0x8
    double _headViewMargin; // +0x10
    UIColor * _textViewColor; // +0x18
    UIFont * _likeInfoTextFont; // +0x20
}
- (double)headViewLen;
- (void)setHeadViewLen:(double)arg1;
- (double)headViewMargin;
- (void)setHeadViewMargin:(double)arg1;
- (id)textViewColor;
- (void)setTextViewColor:(id)arg1;
- (id)likeInfoTextFont;
- (void)setLikeInfoTextFont:(id)arg1;
- (void).cxx_destruct;
@end
