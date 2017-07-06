//
//  WSHorizontalPageFlowLayout.h
//  WSHorizontalPageFlowLayout
//
//  Created by 余汪送 on 2017/7/6.
//  Copyright © 2017年 capsule. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WSHorizontalPageFlowLayout : UICollectionViewLayout

///Mark: 内容的偏移量(包括区头的左右)
@property (nonatomic, assign) UIEdgeInsets contentInset;

///Mark: 一下属性可通过UICollectionViewDelegateFlowLayout协议方法对每个section单独设置
///Mark: section的偏移量,通过这个属性设置统一的偏移
@property (nonatomic, assign) UIEdgeInsets sectionInset;

@property (nonatomic, assign) CGFloat minimumLineSpacing;
@property (nonatomic, assign) CGFloat minimumInteritemSpacing;

@property (nonatomic, assign) CGSize itemSize;

@property (nonatomic, assign) CGSize headerReferenceSize;
@property (nonatomic, assign) CGSize footerReferenceSize;

@end
