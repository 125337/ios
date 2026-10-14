//
//  BBMergeEntry.m
//  MioPlugin
//

#import "BBMergeEntry.h"

@implementation BBMergeEntry

- (BOOL)isGroupHead {
    return self.pos == MOMergePositionFirst || self.pos == MOMergePositionSingle;
}

- (BOOL)isGroupTail {
    return self.pos == MOMergePositionLast || self.pos == MOMergePositionSingle;
}

@end
