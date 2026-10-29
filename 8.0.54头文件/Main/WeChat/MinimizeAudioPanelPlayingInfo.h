@interface MinimizeAudioPanelPlayingInfo : NSObject <PBCoding>
{
    BOOL _isPlaying; // +0x8
    BOOL _shouldShowFloatingView; // +0x9
    unsigned int _bizType; // +0xc
    unsigned int _bizSubType; // +0x10
    unsigned int _updateTime; // +0x14
    unsigned int _tapeType; // +0x18
    NSString * _bizId; // +0x20
    NSData * _contextData; // +0x28
    NSString * _title; // +0x30
    NSString * _source; // +0x38
    NSString * _coverUrl; // +0x40
    NSString * _tapeName; // +0x48
    NSString * _tapeDesc; // +0x50
    NSString * _tapeCoverUrl; // +0x58
}
+ (void)PBArrayAdd_bizType;
+ (void)PBArrayAdd_bizId;
+ (void)PBArrayAdd_contextData;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_tapeName;
+ (void)PBArrayAdd_tapeDesc;
+ (void)PBArrayAdd_tapeCoverUrl;
+ (void)PBArrayAdd_tapeType;
+ (void)PBArrayAdd_bizSubType;
+ (void)initialize;
- (id)getTapeName;
- (id)getTapeDescription;
- (id)getTapeCover;
- (BOOL)isTapeCoverRounded;
- (id)copyPlayingInfo;
- (BOOL)isSamePlayingInfo:(id)arg1;
- (id)getPBPropertyTable;
- (unsigned int)bizType;
- (void)setBizType:(unsigned int)arg1;
- (id)bizId;
- (void)setBizId:(id)arg1;
- (id)contextData;
- (void)setContextData:(id)arg1;
- (unsigned int)bizSubType;
- (void)setBizSubType:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)shouldShowFloatingView;
- (void)setShouldShowFloatingView:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (unsigned int)tapeType;
- (void)setTapeType:(unsigned int)arg1;
- (id)tapeName;
- (void)setTapeName:(id)arg1;
- (id)tapeDesc;
- (void)setTapeDesc:(id)arg1;
- (id)tapeCoverUrl;
- (void)setTapeCoverUrl:(id)arg1;
- (void).cxx_destruct;
@end

