@interface MMBGMSelectedConfig : NSObject
{
    int _musicBussId; // +0x8
    MMBGMSelectedOptionalConfig * _optionalConfig; // +0x10
}
- (id)genFixedDataReportDict;
- (int)musicBussId;
- (void)setMusicBussId:(int)arg1;
- (id)optionalConfig;
- (void)setOptionalConfig:(id)arg1;
- (void).cxx_destruct;
@end
