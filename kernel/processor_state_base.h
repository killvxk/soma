/**
 * @file	processor_state_base.h
 * @brief	CPU 状態の基底クラス。
 * @author	Masakazu Asama <m-asama@ginzado.co.jp>
 */

#pragma once

#include "type.h"

/**
 * CPU 状態の基底クラス。
 */
class processor_state_base {

public:
	/**
	 * コンストラクタ。
	 */
	processor_state_base();

	/**
	 * デストラクタ。
	 */
	virtual ~processor_state_base();

	/**
	 * コピーコンストラクタ。コピーは禁止。
	 */
	processor_state_base(const processor_state_base &src) = delete;

	/**
	 * ムーブコンストラクタ。ムーブは禁止。
	 */
	processor_state_base(processor_state_base &&src) = delete;

	/**
	 * コピー代入演算子。コピー代入は禁止。
	 */
	processor_state_base &operator=(const processor_state_base &src) = delete;

	/**
	 * ムーブ代入演算子。ムーブ代入は禁止。
	 */
	processor_state_base &operator=(processor_state_base &&src) = delete;

	/**
	 *
	 */
	virtual int init(uint64_t thread_main, uint64_t thread_arg) = 0;

	/**
	 *
	 */
	//virtual void backup(uint64_t *processor_state) = 0;

	/**
	 *
	 */
	//virtual void restore(uint64_t *processor_state) = 0;

	/**
	 *
	 */
	virtual uint64_t page_table() = 0;

	/**
	 *
	 */
	virtual uint64_t stack_pointer() = 0;

	/**
	 *
	 */
	virtual void *processor_state_address() = 0;

	/**
	 *
	 */
	virtual void dump() = 0;

};

