@interface WCFinderNativeDramaDetailCGIParams : NSObject
{
    unsigned long long _dramaId; // +0x8
    unsigned long long _fromObjectId; // +0x10
    FinderNativeDramaSessionInfo * _nativeDramaSessionInfo; // +0x18
}
- (unsigned long long)dramaId;
- (void)setDramaId:(unsigned long long)arg1;
- (unsigned long long)fromObjectId;
- (void)setFromObjectId:(unsigned long long)arg1;
- (id)nativeDramaSessionInfo;
- (void)setNativeDramaSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
