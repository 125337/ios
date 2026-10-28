@interface MJCaptionReportAssetInfo : NSObject
{
    NSString * _assetID; // +0x8
    NSMutableDictionary * _finalCaptionResultByAudioIDs; // +0x10
    NSMutableDictionary * _voiceInfoByAudioIDs; // +0x18
    unsigned long long _deleteSentenceTimes; // +0x20
    unsigned long long _transTimes; // +0x28
    unsigned long long _invokedInputBoxTimes; // +0x30
    unsigned long long _audioProcessTimeCost; // +0x38
    unsigned long long _asrTimeCost; // +0x40
}
- (id)initWithAssetID:(id)arg1;
- (void)addFinalCaptionResult:(id)arg1 withAudioID:(id)arg2;
- (void)addVoiceInfo:(id)arg1 withAudioID:(id)arg2;
- (void)incrementDeleteSentenceTimes;
- (void)incrementTransTimes;
- (void)incrementInvokedInputBoxTimes;
- (void)addAudioProcessTimeCost:(unsigned long long)arg1;
- (void)addAsrTimeCost:(unsigned long long)arg1;
- (id)transResultFromCaptionResult:(id)arg1;
- (id)toAssetInfoPB;
- (id)description;
- (id)assetID;
- (id)finalCaptionResultByAudioIDs;
- (void)setFinalCaptionResultByAudioIDs:(id)arg1;
- (id)voiceInfoByAudioIDs;
- (unsigned long long)deleteSentenceTimes;
- (unsigned long long)transTimes;
- (unsigned long long)invokedInputBoxTimes;
- (unsigned long long)audioProcessTimeCost;
- (unsigned long long)asrTimeCost;
- (void).cxx_destruct;
@end
