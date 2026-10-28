@interface MMLiveContainerPresentCheckRecord : NSObject
{
    unsigned long long _error; // +0x8
    NSString * _inheritedVCDesc; // +0x10
    unsigned long long _scene; // +0x18
    unsigned long long _liveId; // +0x20
}
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)error;
- (void)setError:(unsigned long long)arg1;
- (id)inheritedVCDesc;
- (void)setInheritedVCDesc:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
