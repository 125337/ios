@interface FavRecordVoiceNodeView : FavRecordLeftThumbRightLabelNodeView <IFavAudioPlayerExt>
{
    FavAudioInfo * m_audioInfo; // +0x78
}
- (id)initWithDataSource:(id)arg1;
- (void)addContentSubView;
- (void)onClick;
- (void)OnBeginPlay:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnPlayError:(id)arg1;
- (void).cxx_destruct;
@end

