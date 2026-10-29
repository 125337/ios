@interface WCFinderCommentImageAttachInfo : NSObject
{
    BOOL _isFastSendPhoto; // +0x8
    NSString * _exifJSONStr; // +0x10
    double _createTime; // +0x18
    NSDictionary * _likeMilestonePosterInfo; // +0x20
}
- (id)exifJSONStr;
- (void)setExifJSONStr:(id)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (id)likeMilestonePosterInfo;
- (void)setLikeMilestonePosterInfo:(id)arg1;
- (BOOL)isFastSendPhoto;
- (void)setIsFastSendPhoto:(BOOL)arg1;
- (void).cxx_destruct;
@end
