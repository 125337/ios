@interface WCFinderNativeDramaStreamCGIParams : NSObject
{
    int _sectionType; // +0x8
    unsigned long long _dramaId; // +0x10
    FinderNativeDramaSessionInfo * _nativeDramaSessionInfo; // +0x18
}
- (unsigned long long)dramaId;
- (void)setDramaId:(unsigned long long)arg1;
- (int)sectionType;
- (void)setSectionType:(int)arg1;
- (id)nativeDramaSessionInfo;
- (void)setNativeDramaSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
