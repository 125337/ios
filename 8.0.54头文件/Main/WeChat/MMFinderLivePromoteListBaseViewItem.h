@interface MMFinderLivePromoteListBaseViewItem : NSObject
{
    BOOL _isContainItem; // +0x8
    unsigned int _type; // +0xc
    FinderLiveShopWindowAdItem * _adItem; // +0x10
    FinderJumpInfo * _jumpInfo; // +0x18
    FinderLivePromoteInfoRedPacketCover * _redPacketCover; // +0x20
    FinderLiveListenPromoteInfo * _listenPromoteInfo; // +0x28
    FinderPaidCollectionInfo * _paidCollectionInfo; // +0x30
}
- (id)adItem;
- (void)setAdItem:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)redPacketCover;
- (void)setRedPacketCover:(id)arg1;
- (id)listenPromoteInfo;
- (void)setListenPromoteInfo:(id)arg1;
- (id)paidCollectionInfo;
- (void)setPaidCollectionInfo:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (BOOL)isContainItem;
- (void)setIsContainItem:(BOOL)arg1;
- (void).cxx_destruct;
@end

