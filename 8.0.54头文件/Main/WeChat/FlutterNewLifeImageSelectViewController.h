@interface FlutterNewLifeImageSelectViewController : FlutterNewLifeViewController
{
    MMBGMSelectHalfScreenViewController * _selectMusicVc; // +0x68
    NSMutableDictionary * _idMusicMap; // +0x70
    id <NewLifePostEndDelegate> _postEndDelegate; // +0x78
}
- (id)idMusicMap;
- (void)postEnd:(id)arg1;
- (id)selectMusicVc;
- (void)setSelectMusicVc:(id)arg1;
- (void)setIdMusicMap:(id)arg1;
- (id)postEndDelegate;
- (void)setPostEndDelegate:(id)arg1;
- (void).cxx_destruct;
@end

