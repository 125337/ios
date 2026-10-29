@interface MJSegmentPropertyAccessor : NSObject
{
    MJSegmentViewModel * _segmentVM; // +0x8
}
- (id)initWithSegmentViewModel:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 atTimeInTimeline:(struct)arg2;
- (void)setSubText:(id)arg1 atTimeInTimeline:(struct)arg2;
- (id)displayingText;
- (id)displayingSubText;
- (id)displayingTextAtTimeInTimeline:(struct)arg1;
- (id)displayingSubTextAtTimeInTimeline:(struct)arg1;
- (id)fontName;
- (void)setFontName:(id)arg1;
- (id)materialID;
- (void)setMaterialID:(id)arg1;
- (id)colorStyleID;
- (void)setColorStyleID:(id)arg1;
- (id)animPresetID;
- (BOOL)isBuiltinAnimEnabled;
- (void)updateAnimPresetWithID:(id)arg1;
- (id)displayingCaptionTextInLanguage:(id)arg1;
- (id)displayingCaptionTextAtTimeInTimeline:(struct)arg1 language:(id)arg2;
- (void)setCaptionText:(id)arg1 atTimeInTimeline:(struct)arg2 language:(id)arg3;
- (id)segmentVM;
- (void)setSegmentVM:(id)arg1;
- (void).cxx_destruct;
@end

