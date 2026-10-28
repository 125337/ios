@interface MMFinderLiveGiftResourceRequestCDNObject : MMFinderLiveGiftResourceRequestBaseObject
{
    BOOL _useProprietaryProtocol; // +0x8
    CdnComMediaInfo * _cdnComInfo; // +0x10
}
- (id)cdnComInfo;
- (void)setCdnComInfo:(id)arg1;
- (BOOL)useProprietaryProtocol;
- (void)setUseProprietaryProtocol:(BOOL)arg1;
- (void).cxx_destruct;
@end
