@interface WASyncBlockCgiRequestCmd : WASyncBaseCmd
{
    unsigned int _blockBeginTime; // +0x40
    unsigned int _blockEndTime; // +0x44
    NSMutableArray * _blockCgis; // +0x48
    NSMutableArray * _sceneLists; // +0x50
}
- (id)description;
- (id)blockCgis;
- (void)setBlockCgis:(id)arg1;
- (id)sceneLists;
- (void)setSceneLists:(id)arg1;
- (unsigned int)blockBeginTime;
- (void)setBlockBeginTime:(unsigned int)arg1;
- (unsigned int)blockEndTime;
- (void)setBlockEndTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
