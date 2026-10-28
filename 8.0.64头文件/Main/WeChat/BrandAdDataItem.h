@interface BrandAdDataItem : NSObject
{
    unsigned int _expiredTimeInSec; // +0x8
    NSString * _content; // +0x10
    NSDictionary * _dicAdInfo; // +0x18
    NSString * _traceId; // +0x20
    NSString * _aid; // +0x28
    NSString * _bizType; // +0x30
}
- (id)description;
- (id)content;
- (void)setContent:(id)arg1;
- (id)dicAdInfo;
- (void)setDicAdInfo:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)bizType;
- (void)setBizType:(id)arg1;
- (unsigned int)expiredTimeInSec;
- (void)setExpiredTimeInSec:(unsigned int)arg1;
- (void).cxx_destruct;
@end
