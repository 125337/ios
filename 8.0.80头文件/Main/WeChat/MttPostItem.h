@interface MttPostItem : NSObject
{
    BOOL _hadReported; // +0x8
    NSObject<QBPostDataProtocol> * _item; // +0x10
    double _inTime; // +0x18
    NSString * _mainURLString; // +0x20
    long long _markCount; // +0x28
}
- (void).cxx_destruct;
- (id)item;
- (void)setItem:(id)arg1;
- (double)inTime;
- (void)setInTime:(double)arg1;
- (id)mainURLString;
- (void)setMainURLString:(id)arg1;
- (BOOL)hadReported;
- (void)setHadReported:(BOOL)arg1;
- (long long)markCount;
- (void)setMarkCount:(long long)arg1;
@end
