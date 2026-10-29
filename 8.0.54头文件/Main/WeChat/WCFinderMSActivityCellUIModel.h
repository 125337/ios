@interface WCFinderMSActivityCellUIModel : NSObject
{
    BOOL _textContentExpand; // +0x8
    BOOL _likeListContentExpand; // +0x9
    BOOL _hideMoreIcon; // +0xa
    BOOL _hideStickyTopIcon; // +0xb
    NSMutableDictionary * _cacheSize; // +0x10
    NSArray * _feedDescTextStyles; // +0x18
    RichTextViewConfig * _feedDescTextConfig; // +0x20
    long long _textLines; // +0x28
    NSArray * _feedCommnetTextStyles; // +0x30
    RichTextViewConfig * _feedCommnetTextConfig; // +0x38
    long long _commnetTextLines; // +0x40
    NSArray * _feedLikeListTextStyles; // +0x48
    RichTextViewConfig * _feedLikeListTextConfig; // +0x50
    long long _likeListTextLines; // +0x58
    unsigned long long _showScene; // +0x60
}
- (id)cacheSize;
- (void)setCacheSize:(id)arg1;
- (id)feedDescTextStyles;
- (void)setFeedDescTextStyles:(id)arg1;
- (id)feedDescTextConfig;
- (void)setFeedDescTextConfig:(id)arg1;
- (BOOL)textContentExpand;
- (void)setTextContentExpand:(BOOL)arg1;
- (long long)textLines;
- (void)setTextLines:(long long)arg1;
- (id)feedCommnetTextStyles;
- (void)setFeedCommnetTextStyles:(id)arg1;
- (id)feedCommnetTextConfig;
- (void)setFeedCommnetTextConfig:(id)arg1;
- (long long)commnetTextLines;
- (void)setCommnetTextLines:(long long)arg1;
- (id)feedLikeListTextStyles;
- (void)setFeedLikeListTextStyles:(id)arg1;
- (id)feedLikeListTextConfig;
- (void)setFeedLikeListTextConfig:(id)arg1;
- (BOOL)likeListContentExpand;
- (void)setLikeListContentExpand:(BOOL)arg1;
- (long long)likeListTextLines;
- (void)setLikeListTextLines:(long long)arg1;
- (unsigned long long)showScene;
- (void)setShowScene:(unsigned long long)arg1;
- (BOOL)hideMoreIcon;
- (void)setHideMoreIcon:(BOOL)arg1;
- (BOOL)hideStickyTopIcon;
- (void)setHideStickyTopIcon:(BOOL)arg1;
- (void).cxx_destruct;
@end

