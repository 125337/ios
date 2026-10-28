@interface MMLiveReplaySetting : NSObject <NSCopying>
{
    BOOL _autoGenLiveReplay; // +0x8
    BOOL _intelligentlyGenReplayHighlight; // +0x9
    BOOL _enableReplayDumpDanmu; // +0xa
    BOOL _canUseIntelligentlyGenReplayHighlight; // +0xb
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithLiveReplaySettingPbObject:(id)arg1;
- (BOOL)fromLiveReplaySettingPbObject:(id)arg1;
- (id)toLiveReplaySettingPbObject;
- (BOOL)autoGenLiveReplay;
- (void)setAutoGenLiveReplay:(BOOL)arg1;
- (BOOL)intelligentlyGenReplayHighlight;
- (void)setIntelligentlyGenReplayHighlight:(BOOL)arg1;
- (BOOL)enableReplayDumpDanmu;
- (void)setEnableReplayDumpDanmu:(BOOL)arg1;
- (BOOL)canUseIntelligentlyGenReplayHighlight;
- (void)setCanUseIntelligentlyGenReplayHighlight:(BOOL)arg1;
@end
