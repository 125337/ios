@interface WCFinderSearchHighLightItemModel : NSObject <WCFinderFeedContentVMExt>
{
    BOOL _isHidePostTimeLabel; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    NSString * _normalNickName; // +0x18
    NSMutableArray * _nameHightkeywords; // +0x20
    NSString * _normalText; // +0x28
    NSMutableArray * _textHightkeywords; // +0x30
    CGSize _heightCache; // +0x38
}
+ (id)getHighlightTextInContent:(id)arg1 searchText:(id)arg2;
- (id)initWithSearchContentVM:(id)arg1;
- (id)dataItem;
- (void)processHeightName;
- (void)processHeightText;
- (BOOL)isFeedContainText;
- (BOOL)existMediaContent;
- (BOOL)isFeedContainPhoto;
- (BOOL)isFeedContainVideo;
- (void)startDownloadStreamImageImmediately;
- (void)startDownloadStreamImagePriority:(BOOL)arg1;
- (void)generalStartDownloadImagePriority:(BOOL)arg1 maxCount:(unsigned long long)arg2 onlyThumb:(BOOL)arg3;
- (void)cancelDownloadImage;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)processNickname:(id)arg1 normalText:(id)arg2 searchText:(id)arg3;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (CGSize)heightCache;
- (void)setHeightCache:(CGSize)arg1;
- (id)normalNickName;
- (void)setNormalNickName:(id)arg1;
- (id)nameHightkeywords;
- (void)setNameHightkeywords:(id)arg1;
- (id)normalText;
- (void)setNormalText:(id)arg1;
- (id)textHightkeywords;
- (void)setTextHightkeywords:(id)arg1;
- (BOOL)isHidePostTimeLabel;
- (void)setIsHidePostTimeLabel:(BOOL)arg1;
- (void).cxx_destruct;
@end

