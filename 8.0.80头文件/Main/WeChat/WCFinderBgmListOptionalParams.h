@interface WCFinderBgmListOptionalParams : NSObject
{
    int _scene; // +0x8
    int _camera; // +0xc
    int _assetType; // +0x10
    unsigned int _picNum; // +0x14
    NSData * _classifyResultData; // +0x18
    NSArray * _miaojianMusicIds; // +0x20
    NSString * _miaojianTemplateId; // +0x28
    unsigned long long _finderEnterScene; // +0x30
    NSMutableArray * _assertItems; // +0x38
    unsigned long long _previewTimelineDuration; // +0x40
    NSString * _searchSessionID; // +0x48
    NSString * _recommendPrompt; // +0x50
}
- (void)setScene:(int)arg1;
- (void)setCamera:(int)arg1;
- (void)setAssetType:(int)arg1;
- (void)setPicNum:(unsigned int)arg1;
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
- (unsigned long long)previewTimelineDuration;
- (void)setPreviewTimelineDuration:(unsigned long long)arg1;
- (id)searchSessionID;
- (void)setSearchSessionID:(id)arg1;
- (int)scene;
- (int)camera;
- (int)assetType;
- (unsigned int)picNum;
- (id)recommendPrompt;
- (void)setRecommendPrompt:(id)arg1;
- (void).cxx_destruct;
@end
