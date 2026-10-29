@interface WCFinderExtReadingInfoModel : NSObject
{
    BOOL _isFromDraft; // +0x8
    BOOL _linkIsFromPasteBoard; // +0x9
    int _htmlShowStyle; // +0xc
    FinderExtendedReading * _extReading; // +0x10
    FinderJumpInfo * _jumpInfo; // +0x18
}
- (id)initWithPBReadingInfo:(id)arg1;
- (void)setExtReading:(id)arg1;
- (id)init;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (id)extReading;
- (BOOL)isFromDraft;
- (void)setIsFromDraft:(BOOL)arg1;
- (BOOL)linkIsFromPasteBoard;
- (void)setLinkIsFromPasteBoard:(BOOL)arg1;
- (int)htmlShowStyle;
- (void)setHtmlShowStyle:(int)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
