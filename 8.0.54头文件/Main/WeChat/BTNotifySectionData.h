@interface BTNotifySectionData : BTBaseSectionData
{
    unsigned int _notifyCount; // +0x8
    CMessageWrap * _latestMsgWrap; // +0x10
}
- (long long)numberOfRowsInSection;
- (double)sectionHeight;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (unsigned long long)sectionType;
- (id)latestMsgWrap;
- (void)setLatestMsgWrap:(id)arg1;
- (unsigned int)notifyCount;
- (void)setNotifyCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

