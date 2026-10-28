@interface MinimizeTaskEnterContext : NSObject
{
    unsigned int _enterScene; // +0x8
    MinimizeTaskData * _enterTaskData; // +0x10
}
- (id)enterTaskData;
- (void)setEnterTaskData:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
