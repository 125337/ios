@interface WCADCommentWrap : NSObject
{
    unsigned int _startPositionType; // +0x8
    unsigned int _endPositionType; // +0xc
    unsigned int _commentCount; // +0x10
    unsigned int _source; // +0x14
    NSString * _adID; // +0x18
    NSString * _publishID; // +0x20
    NSString * _uxInfo; // +0x28
    unsigned long long _startTime; // +0x30
    unsigned long long _endTime; // +0x38
    double _tableContentY; // +0x40
    NSString * _snsStatExt; // +0x48
    NSString * _adInfoAddress; // +0x50
    NSString * _cacheKey; // +0x58
}
- (id)adID;
- (void)setAdID:(id)arg1;
- (id)publishID;
- (void)setPublishID:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (unsigned int)startPositionType;
- (void)setStartPositionType:(unsigned int)arg1;
- (unsigned int)endPositionType;
- (void)setEndPositionType:(unsigned int)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned int)commentCount;
- (void)setCommentCount:(unsigned int)arg1;
- (double)tableContentY;
- (void)setTableContentY:(double)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)snsStatExt;
- (void)setSnsStatExt:(id)arg1;
- (id)adInfoAddress;
- (void)setAdInfoAddress:(id)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (void).cxx_destruct;
@end
