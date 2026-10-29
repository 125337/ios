@interface WCMicroMerchantFeedExposureInfo : NSObject
{
    BOOL _isExposured; // +0x8
    BOOL _isClicked; // +0x9
    unsigned int _feedCount; // +0xc
    unsigned int _index; // +0x10
    unsigned int _startTime; // +0x14
    NSString * _foldedBlockId; // +0x18
    NSString * _userName; // +0x20
}
- (id)init;
- (id)foldedBlockId;
- (void)setFoldedBlockId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)feedCount;
- (void)setFeedCount:(unsigned int)arg1;
- (BOOL)isExposured;
- (void)setIsExposured:(BOOL)arg1;
- (BOOL)isClicked;
- (void)setIsClicked:(BOOL)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

