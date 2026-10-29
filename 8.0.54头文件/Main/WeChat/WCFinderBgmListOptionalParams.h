@interface WCFinderBgmListOptionalParams : NSObject
{
    NSData * _classifyResultData; // +0x8
    NSArray * _miaojianMusicIds; // +0x10
    NSString * _miaojianTemplateId; // +0x18
    unsigned long long _finderEnterScene; // +0x20
    NSMutableArray * _assertItems; // +0x28
}
- (id)classifyResultData;
- (void)setClassifyResultData:(id)arg1;
- (id)miaojianMusicIds;
- (void)setMiaojianMusicIds:(id)arg1;
- (id)miaojianTemplateId;
- (void)setMiaojianTemplateId:(id)arg1;
- (unsigned long long)finderEnterScene;
- (void)setFinderEnterScene:(unsigned long long)arg1;
- (id)assertItems;
- (void)setAssertItems:(id)arg1;
- (void).cxx_destruct;
@end

