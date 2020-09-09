//
//  LeftAlignedFlowLayout.h
//
//  Created by qingbin on 2020/9/4.
//  Copyright © 2020 qingbin. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  Just a convenience protocol to keep things consistent.
 *  Someone could find it confusing for a delegate object to conform to UICollectionViewDelegateFlowLayout
 *  while using LeftAlignedFlowLayout.
 */
@protocol LeftAlignedFlowLayout <UICollectionViewDelegateFlowLayout>

@end

@interface LeftAlignedFlowLayout : UICollectionViewFlowLayout
- (void)invalidateCache;
@end


