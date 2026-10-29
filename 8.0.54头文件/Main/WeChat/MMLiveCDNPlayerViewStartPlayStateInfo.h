@interface MMLiveCDNPlayerViewStartPlayStateInfo : NSObject
{
    BOOL _hasReceivedCurrentAnchorSEI; // +0x8
    BOOL _hasReceivedOtherAnchorSEI; // +0x9
    BOOL _hasReceivedMicUsersList; // +0xa
    MMFinderLiveStreamTypeInfo * _finderLiveStreamTypeInfo; // +0x10
}
- (id)finderLiveStreamTypeInfo;
- (void)setFinderLiveStreamTypeInfo:(id)arg1;
- (BOOL)hasReceivedCurrentAnchorSEI;
- (void)setHasReceivedCurrentAnchorSEI:(BOOL)arg1;
- (BOOL)hasReceivedOtherAnchorSEI;
- (void)setHasReceivedOtherAnchorSEI:(BOOL)arg1;
- (BOOL)hasReceivedMicUsersList;
- (void)setHasReceivedMicUsersList:(BOOL)arg1;
- (void).cxx_destruct;
@end

