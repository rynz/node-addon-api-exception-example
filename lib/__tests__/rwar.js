const addon = require('../rwar')

describe('node-addon-api', () => {
  test('throws wrong number of arguments', () => {
    expect.assertions(1)
    try {
      addon.rwar()
    } catch (err) {
      debugger
      expect(err).toBeInstanceOf(TypeError)
    }
  })
})

describe('javascript', () => {
  test('throws wrong number of arguments', () => {
    expect.assertions(1)
    try {
      throw new TypeError('Wrong number of arguments')
    } catch (err) {
      debugger
      expect(err).toBeInstanceOf(TypeError)
    }
  })
})
