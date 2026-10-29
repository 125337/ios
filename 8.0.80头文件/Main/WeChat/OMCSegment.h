@interface OMCSegment : NSObject <OMCSegmentMeta>
{
    OMCTimeline * _timeline; // +0x8
    OMJID * _segmentID; // +0x10
}
- (id)initWithSegmentID:(id)arg1 timeline:(id)arg2;
- (SharedPtr<XMSSegment>)backingSegment;
- (unsigned long long)segmentType;
- (BOOL)isTimelineInteractionDisabled;
- (BOOL)isAnchored;
- (id)segmentTitle;
- (void)setSegmentTitle:(id)arg1;
- (BOOL)isElementSegment;
- (BOOL)isTransitionSegment;
- (BOOL)isClipSegment;
- (unsigned long long)belongingGroupType;
- (BOOL)isBelongingAudialGroup;
- (BOOL)isBelongingVisualGroup;
- (struct)presentationStartTime;
- (struct)presentationDuration;
- (struct)presentationTimeRange;
- (struct)absoluteTimeRange;
- (struct)duration;
- (int)layerID;
- (void)setLayerID:(int)arg1;
- (id)tag;
- (id)userInfo;
- (void)removeUserInfoValueForKey:(id)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)userInfoValueForKey:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)timeline;
- (id)segmentID;
- (void).cxx_destruct;
@end
