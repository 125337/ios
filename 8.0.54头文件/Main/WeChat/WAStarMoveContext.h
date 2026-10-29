@interface WAStarMoveContext : MMObject
{
    unsigned int _moveScene; // +0x8
    NSMutableArray * _infos; // +0x10
}
- (id)infos;
- (void)setInfos:(id)arg1;
- (unsigned int)moveScene;
- (void)setMoveScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

